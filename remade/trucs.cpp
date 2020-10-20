// Compte.java
Compte(int montant_initiale) {
  if (montant_initiale < 0)
    throw new IllegalArgumentException();
}

// CompteTest.java
shouldFailOnNegativeCreation {
  try {
    Compte c = new Compte(-100);
    // Erreur ! le constructeur aurait du renvoyer une exception
  } catch (IllegalArgumentException e) 
  {
    // Tout va bien !
  }
}