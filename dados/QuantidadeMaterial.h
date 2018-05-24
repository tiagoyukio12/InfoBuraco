#ifndef QUANTIDADEMATERIAL_H
#define QUANTIDADEMATERIAL_H
//Begin section for file QuantidadeMaterial.h
//TODO: Add definitions that you want preserved
//End section for file QuantidadeMaterial.h


class Material; //Dependency Generated Source:QuantidadeMaterial Target:Material


class OrdemDeServico; //Dependency Generated Source:QuantidadeMaterial Target:OrdemDeServico





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class QuantidadeMaterial
{
    //Begin section for QuantidadeMaterial
    //TODO: Add attributes that you want preserved
    //End section for QuantidadeMaterial

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int quantidade;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Material * material;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServico * ordemDeServico;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        QuantidadeMaterial(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        ~QuantidadeMaterial(); 



        //get quantidade
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_quantidade(); 



        //set quantidade
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_quantidade(int quantidade); 



        //get material
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Material * get_material(); 



        //set material
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_material(Material * material); 



        //get ordemDeServico
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        OrdemDeServico * get_ordemDeServico(); 



        //set ordemDeServico
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ordemDeServico(OrdemDeServico * ordemDeServico); 



};  //end class QuantidadeMaterial



#endif
