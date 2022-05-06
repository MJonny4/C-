DECLARE
  v_numero number(8) := &numero;
begin
  dbms_output.put_line('The input value is: ' || v_numero);
end;