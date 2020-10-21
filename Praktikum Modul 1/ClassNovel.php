<?php

class Novel {
	public 	$judul = "judul", 
			$pengarang = "pengarang",
			$tahunterbit = "tahunterbit",
			$hargabeli = "hargabeli",
			$hargajual = "hargajual";
	public function __construct( $judul, $pengarang, $tahunterbit, $hargabeli, $hargajual){
		$this->judul = $judul;
		$this->pengarang = $pengarang;
		$this->tahunterbit = $tahunterbit;
		$this->hargabeli = $hargabeli;
		$this->hargajual = $hargajual;
	}

	public function getLabel(){
		return "$this->judul. $this->pengarang, $this->tahunterbit, $this->hargabeli, $this->hargajual";
	}
}

$Novel1 = new Novel("Detektif Conan Vol.3", "<br>Aoyama Gosho", "<br>2020", "<br>65000", "<br>52000");
$Novel2 = new Novel("The Big Sleep", "<br>Raymond Chandler", "<br>1939", "<br>35000", "<br>28000");
$Novel3 = new Novel("The Maltese Falcon", "<br>Dashiell Hammet", "<br>1929", "<br>40000", "<br>32000");

echo "Novel1 : " . $Novel1->getLabel();
echo "<br><br>";
echo "Novel2 : " . $Novel2->getLabel();
echo "<br><br>";
echo "Novel3 : " . $Novel3->getLabel();