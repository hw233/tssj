//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by Fernflower decompiler)
//

package com.wjhe.tsjh24.alipay;

import android.text.TextUtils;
import java.util.Iterator;
import java.util.Map;

public class PayResult {
    private String resultStatus;
    private String result;
    private String memo;

    public PayResult(Map<String, String> rawResult) {
        if(rawResult != null) {
            Iterator var3 = rawResult.keySet().iterator();

            while(var3.hasNext()) {
                String key = (String)var3.next();
                if(TextUtils.equals(key, "resultStatus")) {
                    this.resultStatus = (String)rawResult.get(key);
                } else if(TextUtils.equals(key, "result")) {
                    this.result = (String)rawResult.get(key);
                } else if(TextUtils.equals(key, "memo")) {
                    this.memo = (String)rawResult.get(key);
                }
            }

        }
    }

    public String toString() {
        return "resultStatus={" + this.resultStatus + "};memo={" + this.memo + "};result={" + this.result + "}";
    }

    public String getResultStatus() {
        return this.resultStatus;
    }

    public String getMemo() {
        return this.memo;
    }

    public String getResult() {
        return this.result;
    }
}
