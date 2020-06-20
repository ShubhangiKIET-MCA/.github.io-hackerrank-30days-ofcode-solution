
Difference(int[] a){
          elements = a;
      }

      public void computeDifference() {
          Arrays.sort(elements);
          maximumDifference = Math.abs(elements[elements.length-1] - elements[0]);
      }

