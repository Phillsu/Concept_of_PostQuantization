### Symmetric Quantization Formula

1. **Quantization**:  
   \[
   Q(x) = \text{round}\left(\frac{x}{\alpha}\right)
   \]  
   where \( \alpha \) is the scale factor, typically:  
   \[
   \alpha = \frac{\text{max}(|x|)}{2^{b-1} - 1}
   \]

2. **Dequantization**:  
   \[
   x' = Q(x) \cdot \alpha
   \]

---

### Asymmetric Quantization Formula

1. **Quantization**:  
   \[
   Q(x) = \text{round}\left(\frac{x}{\alpha}\right) + Z
   \]  
   where:
   - \( \alpha \): scale factor, typically:  
     \[
     \alpha = \frac{\text{max}(x) - \text{min}(x)}{2^b - 1}
     \]
   - \( Z \): zero-point, typically:  
     \[
     Z = \text{round}\left(-\frac{\text{min}(x)}{\alpha}\right)
     \]

2. **Dequantization**:  
   \[
   x' = (Q(x) - Z) \cdot \alpha
   \]
