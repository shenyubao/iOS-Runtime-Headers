/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@class NSObject<OS_dispatch_queue>;

@interface TTSAudioSession : NSObject {
    struct { 
        int category; 
        long activity; 
    struct { 
        int category; 
        long activity; 
    struct __CFBag { } *_activityBag;
    BOOL _audioSessionIsSetUp;
    BOOL _bluetoothAllowed;
    } _cachedState;
    } _desiredState;
    NSObject<OS_dispatch_queue> *_queue;
    int _serverGeneration;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_audioSessionInterrupted:(id)arg1;
- (void)_mediaServicesWereReset:(id)arg1;
- (long)_nextActivityForActive:(BOOL)arg1 activity:(long)arg2 serverActivity:(long)arg3;
- (int)_safeServerGeneration;
- (void)_safeSetActive:(BOOL)arg1 withActivity:(long)arg2;
- (void)_safeSetBluetoothInputAllowed:(BOOL)arg1;
- (void)_safeSetCategoryForActivity:(long)arg1;
- (void)_safeSetupAudioSession;
- (void)_setCategoryForActivity:(long)arg1;
- (void)_setupAudioSession;
- (void)dealloc;
- (id)init;

@end
