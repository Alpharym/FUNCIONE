#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "Domínios.h"

/// \brief Entidade Desenvolvedor
///
/// Entidade que vai usar a aplicação. Interage com teste e casos de teste.

class Desenvolvedor {

    private:
        Matricula matricula;
        Texto nome;
        Senha senha;
        Telefone telefone;

    public:

        void setMatricula(const string&);
        string getMatricula() const;

        void setTexto(const string&);
        string getTexto() const;

        void setSenha(const string&);
        string getSenha() const;

        void setTelefone(const string&);
        string getTelefone() const;

    /// Construtor da entidade Desenvolvedor que usa os testes para validação dos atributos a serem inseridos
    /// @param (matricula, nome, senha, telefone)
        Desenvolvedor(const string&, const string&, const string&, const string&);

};

inline void Desenvolvedor::setMatricula(const string& matricula){
    this->matricula.setValor(matricula);

}

inline string Desenvolvedor::getMatricula() const {
    return matricula.getValor();
}

inline void Desenvolvedor::setTexto(const string& nome){
    this->nome.setValor(nome);

}

inline string Desenvolvedor::getTexto() const {
    return nome.getValor();
}

inline void Desenvolvedor::setSenha(const string& senha){
    this->senha.setValor(senha);

}

inline string Desenvolvedor::getSenha() const {
    return senha.getValor();
}

inline void Desenvolvedor::setTelefone(const string& telefone){
    this->telefone.setValor(telefone);

}

inline string Desenvolvedor::getTelefone() const {
    return telefone.getValor();
}


/// \brief Entidade Teste
///
/// Campo que define o objeto Teste e seus atributos.

class Teste {
    private:
        Codigo codigo;
        Texto nome;
        Classe classe;

    public:
        void setCodigo(const string&);
        string getCodigo() const;

        void setTexto(const string&);
        string getTexto() const;

        void setClasse(const string&);
        string getClasse() const;

    /// Todo atributo da entidade tem um set/get<b>NomeDoAtributo</b>
    /// @param (codigo, nome, classe)
        Teste(const string&, const string&, const string&);
};

inline void Teste::setCodigo(const string& codigo){
    this->codigo.setValor(codigo);
}

inline string Teste::getCodigo() const {
    return codigo.getValor();
}

inline void Teste::setTexto(const string& nome){
    this->nome.setValor(nome);
}

inline string Teste::getTexto() const {
    return nome.getValor();
}

inline void Teste::setClasse(const string& classe){
    this->classe.setValor(classe);
}

inline string Teste::getClasse() const {
    return classe.getValor();
}

/// \brief Entidade Caso de Teste
///
/// Caso de Teste, que é derivado de um teste, vindo do desenvolvedor.
class CasoDeTeste {
    private:
        Codigo codigo;
        Texto nome;
        Data data;
        Texto acao;
        Texto resposta;
        Resultado resultado;

    public:

        void setCodigo(const string&);
        string getCodigo() const;

        void setNome(const string&);
        string getNome() const;

        void setData(const string&);
        string getData() const;

         void setAcao(const string&);
        string getAcao() const;

        void setResposta(const string&);
        string getResposta() const;

        void setResultado(const string&);
        string getResultado() const;

    /// Construtor da entidade CasoDeTeste, por meio da validação de cada uma das strings introduzidas
    /// Todo atributo da entidade tem um set/get<b>NomeDoAtributo</b>
    /// @param codigo, nome, data, ação, resposta, Resultado
        CasoDeTeste(const string&, const string&, const string&, const string&, const string&, const string&);

};

inline void CasoDeTeste::setCodigo(const string& codigo){
    this->codigo.setValor(codigo);
}

inline string CasoDeTeste::getCodigo() const {
    return codigo.getValor();
}

inline void CasoDeTeste::setNome(const string& nome){
    this->nome.setValor(nome);
}

inline string CasoDeTeste::getNome() const {
    return nome.getValor();
}

inline void CasoDeTeste::setData(const string& data){
    this->data.setValor(data);
}

inline string CasoDeTeste::getData() const {
    return data.getValor();
}

inline void CasoDeTeste::setAcao(const string& acao){
    this->acao.setValor(acao);
}

inline string CasoDeTeste::getAcao() const {
    return acao.getValor();
}

inline void CasoDeTeste::setResposta(const string& resposta){
    this->resposta.setValor(resposta);
}

inline string CasoDeTeste::getResposta() const {
    return resposta.getValor();
}

inline void CasoDeTeste::setResultado(const string& resultado){
    this->resultado.setValor(resultado);
}

inline string CasoDeTeste::getResultado() const {
    return resultado.getValor();
}

#endif // ENTIDADES_H_INCLUDED
