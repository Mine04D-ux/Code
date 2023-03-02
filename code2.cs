  private void textBox1_TextChanged(object sender, EventArgs e)
  {
    if (textBox1.TextLength != 0 && textBox2.TextLength !=0)
    {
        button1.Enabled = true;
    }
    else
    {
        button1.Enabled = false;
    }
  }

  private void textBox2_TextChanged(object sender, EventArgs e)
  {
    if (textBox1.TextLength != 0 && textBox2.TextLength != 0)
    {
        button1.Enabled = true;
    }
    else
    {
        button1.Enabled = false;
    }
  }
