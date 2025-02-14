set(SOURCES fft.cpp
            Xtan2.cpp
            channels.cpp
            dab-audio.cpp
            dab-constants.cpp
            dab_decoder.cpp
            dabplus_decoder.cpp
            decoder_adapter.cpp
            eep-protection.cpp
            fec.c
            fib-processor.cpp
            fic-handler.cpp
            freq-interleaver.cpp
            mot_manager.cpp
            msc-handler.cpp
            ofdm-decoder.cpp
            ofdm-processor.cpp
            pad_decoder.cpp
            phasereference.cpp
            phasetable.cpp
            profiling.cpp
            protTables.cpp
            radio-receiver.cpp
            tii-decoder.cpp
            tools.cpp
            uep-protection.cpp
            viterbi.cpp)

set(HEADERS MathHelper.h
            Xtan2.h
            channels.h
            dab-audio.h
            dab-constants.h
            dab-processor.h
            dab-virtual.h
            dab_decoder.h
            dabplus_decoder.h
            decoder_adapter.h
            eep-protection.h
            energy_dispersal.h
            fec.h
            fft.h
            fib-processor.h
            fic-handler.h
            freq-interleaver.h
            mot_manager.h
            msc-handler.h
            ofdm-decoder.h
            ofdm-processor.h
            pad_decoder.h
            phasereference.h
            phasetable.h
            profiling.h
            protTables.h
            protection.h
            radio-controller.h
            radio-receiver-options.h
            radio-receiver.h
            ringbuffer.h
            subchannel_sink.h
            tii-decoder.h
            tools.h
            uep-protection.h
            viterbi.h)

add_library(code_src_dsp_dab OBJECT ${SOURCES} ${HEADERS})
target_include_directories(code_src_dsp_dab PRIVATE ${PROJECT_SOURCE_DIR}/src)
