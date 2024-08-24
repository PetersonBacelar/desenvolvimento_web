// scripts.js

function scrollToForm() {
    document.getElementById("contato").scrollIntoView({ behavior: "smooth" });
}

document.getElementById("contact-form").addEventListener("submit", function(event) {
    event.preventDefault(); // Evita o envio do formulário para fins de demonstração

    // Aqui você pode adicionar funcionalidade de envio, como envio para um servidor ou API

    alert("Mensagem enviada com sucesso!");
    document.getElementById("contact-form").reset(); // Limpa o formulário
});
