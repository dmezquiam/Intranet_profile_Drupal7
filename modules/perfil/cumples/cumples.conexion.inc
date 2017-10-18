<?php   
    
  /*
   * Funcion que devuelve un array con las personas que cumplen ano hoy
   * dado un listado de carnet de identidad, CI.
   * 
   */
    function nombre_edad($carnetID){               
        // Seleciconar los CI de las personas que cumplen ano hoy.
        $ci_cumplen_hoy = array();
        $cont = 0;
        foreach ($carnetID as $ci){
            $dia = substr($ci, 4,2);
            $mes = substr($ci, 2,2);              
            if (($dia == date('d')) && ($mes == date('m'))) {
                $ci_cumplen_hoy[$cont++] =  $ci;
            }
        } 					
        // Calcular la edad.
        $nombre_edad = array();
        $i = 0;
        foreach ($ci_cumplen_hoy as $id){
            if (substr($id, 0,1) == '0' || substr($id, 0,1) == '1'){
                $anno_completo = '20'.substr($id, 0,2); 
                $edad = date('Y') - $anno_completo;                
            }            
            else{
                $anno_completo = '19'.substr($id, 0,2);             
                $edad = date('Y') - $anno_completo;                
            }
			//se asume que hay una tabla 'personas' en la base de datos con los campos 'nombre' y 'ci'
            $nombre = db_query("SELECT nombre FROM  {personas} WHERE ci = :ci",
                                array(':ci' => $id))->fetchField();
            $nombre_edad[$i++] = '<strong>'.$nombre.'</strong>'.' <em>está cumpliendo</em> '.$edad.'</br>';
        }
        return $nombre_edad;   
    }


