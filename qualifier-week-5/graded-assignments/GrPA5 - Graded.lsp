(defun rev-print (n)
  (if (> n 0)
      (progn
        (let ((num (read))) ; Read an integer
          (rev-print (sub1 n)) ; Recursive call for remaining elements
          (format t "~A~%" num)) ; Print the current number after recursion
      (nil)))

(defun main ()
  (let ((num-values (read))) ; Read number of values
    (if (<= num-values 0)
        (format t "Error! Please enter a positive number of integers.")
        (dotimes (i num-values)
          (format t "Enter integer ~d: " (1+ i)) ; Prompt for each integer
          (rev-print (sub1 num-values)))))

(main)
