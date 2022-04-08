module Notices

  class Notice

    def xss

        "<div style='background:#fcd0c5;border:#fca48d;color:#fc633d;border-radius:5px;padding:7px 12px;font-family:verdana'><b>Warning:</b> This page accepts raw HTTP request parameters and is vulnerable to XSS.</div><br/>"
    end
  end
end
