/*
 * Copyright 2014 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package org.kaaproject.kaa.server.admin.shared.logs;

import org.kaaproject.avro.ui.shared.RecordField;
import org.kaaproject.kaa.common.dto.logs.LogAppenderBaseDto;

public class LogAppenderFormWrapper extends LogAppenderBaseDto {

    private static final long serialVersionUID = 7273552561803139379L;

    private RecordField configuration;

    public LogAppenderFormWrapper() {
        super();
    }

    public LogAppenderFormWrapper(LogAppenderBaseDto logAppenderDto) {
        super(logAppenderDto);
    }

    public RecordField getConfiguration() {
        return configuration;
    }

    public void setConfiguration(RecordField configuration) {
        this.configuration = configuration;
    }
}