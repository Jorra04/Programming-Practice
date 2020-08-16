int main(){
    PTE->PDDR       |= 1u<<30u;    //PTE30 is O/p

    PORTE->PCR[30]  &= 0x011;   //filter is enables and alt0 (analog)

    //Enable DAC0

    SIM->SCGC6 |= SIM_SCGC6_DAC0_MASK;

    //The DAC system is enabled, DACREF_2 selected. For KL43Z, DACREF_2 should be enabled! 

    DAC0->C0   |= 0xC0 ; // 0x80; DAC En, DACREF_2 selected.

    //The loop

    while (1){
        for (i = 0; i < 4096; i++) {

        DAC0->DAT[0].DATL = i & 0xff;        // write low byte

        DAC0->DAT[0].DATH = (i >> 8) & 0x0f; // write high byte

        // may introduce delay here

    }
    }

      

}
