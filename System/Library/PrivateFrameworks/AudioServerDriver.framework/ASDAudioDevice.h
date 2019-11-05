/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, ASDDeviceConfigurationChangeDelegate;
@class NSMutableArray, NSObject, NSArray, NSString, NSDictionary;

@interface ASDAudioDevice : ASDObject {

	NSMutableArray* _inputStreams;
	NSObject*<OS_dispatch_queue> _inputStreamQueue;
	NSMutableArray* _outputStreams;
	NSObject*<OS_dispatch_queue> _outputStreamQueue;
	NSMutableArray* _controls;
	NSObject*<OS_dispatch_queue> _controlQueue;
	double _samplingRate;
	NSArray* _samplingRates;
	NSObject*<OS_dispatch_queue> _sampleRateQueue;
	long long _ioReferenceCount;
	NSObject*<OS_dispatch_queue> _ioReferenceQueue;
	NSString* _deviceName;
	unsigned _timestampPeriod;
	unsigned _transportType;
	unsigned _clockDomain;
	unsigned _clockAlgorithm;
	BOOL _clockIsStable;
	NSObject*<OS_dispatch_semaphore> _wakeSemaphore;
	NSDictionary* _clientDescription;
	NSDictionary* _deviceDescription;
	BOOL _isAlive;
	BOOL _isRunning;
	unsigned _inputLatency;
	unsigned _outputLatency;
	unsigned _inputSafetyOffset;
	unsigned _outputSafetyOffset;
	/*^block*/id _getZeroTimestampBlockUnretained;
	/*^block*/id _willDoReadInputBlockUnretained;
	/*^block*/id _willDoConvertInputBlockUnretained;
	/*^block*/id _willDoProcessInputBlockUnretained;
	/*^block*/id _willDoProcessOutputBlockUnretained;
	/*^block*/id _willDoMixOutputBlockUnretained;
	/*^block*/id _willDoProcessMixBlockUnretained;
	/*^block*/id _willDoConvertMixBlockUnretained;
	/*^block*/id _willDoWriteMixBlockUnretained;
	/*^block*/id _beginIOOperationBlockUnretained;
	/*^block*/id _endIOOperationBlockUnretained;
	BOOL _canBeDefaultDevice;
	BOOL _canBeDefaultSystemDevice;
	BOOL _hidden;
	BOOL _canChangeDeviceName;
	NSString* _deviceUID;
	NSString* _modelUID;
	NSString* _manufacturerName;
	NSString* _modelName;
	/*^block*/id _getZeroTimestampBlock;
	/*^block*/id _willDoReadInputBlock;
	/*^block*/id _willDoConvertInputBlock;
	/*^block*/id _willDoProcessInputBlock;
	/*^block*/id _willDoProcessOutputBlock;
	/*^block*/id _willDoMixOutputBlock;
	/*^block*/id _willDoProcessMixBlock;
	/*^block*/id _willDoConvertMixBlock;
	/*^block*/id _willDoWriteMixBlock;
	/*^block*/id _beginIOOperationBlock;
	/*^block*/id _endIOOperationBlock;
	id<ASDDeviceConfigurationChangeDelegate> _configurationChangeDelegate;

}

@property (nonatomic,copy) id beginIOOperationBlock;                                                                   //@synthesize beginIOOperationBlock=_beginIOOperationBlock - In the implementation block
@property (nonatomic,copy) id endIOOperationBlock;                                                                     //@synthesize endIOOperationBlock=_endIOOperationBlock - In the implementation block
@property (assign,nonatomic,__weak) id<ASDDeviceConfigurationChangeDelegate> configurationChangeDelegate;              //@synthesize configurationChangeDelegate=_configurationChangeDelegate - In the implementation block
@property (nonatomic,readonly) /*^block*/id* getZeroTimestampBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* willDoReadInputBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* willDoConvertInputBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* willDoProcessInputBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* willDoProcessOutputBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* willDoMixOutputBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* willDoProcessMixBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* willDoConvertMixBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* willDoWriteMixBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* beginIOOperationBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* endIOOperationBlockUnretainedPtr; 
@property (nonatomic,copy) NSString * deviceName; 
@property (nonatomic,copy,readonly) NSString * deviceUID;                                                              //@synthesize deviceUID=_deviceUID - In the implementation block
@property (nonatomic,copy) NSString * modelUID;                                                                        //@synthesize modelUID=_modelUID - In the implementation block
@property (nonatomic,copy) NSString * manufacturerName;                                                                //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (nonatomic,copy) NSString * modelName;                                                                       //@synthesize modelName=_modelName - In the implementation block
@property (assign,nonatomic) double samplingRate; 
@property (nonatomic,copy) NSArray * samplingRates; 
@property (assign,nonatomic) BOOL canBeDefaultDevice;                                                                  //@synthesize canBeDefaultDevice=_canBeDefaultDevice - In the implementation block
@property (assign,nonatomic) BOOL canBeDefaultSystemDevice;                                                            //@synthesize canBeDefaultSystemDevice=_canBeDefaultSystemDevice - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                              //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL canChangeDeviceName;                                                                 //@synthesize canChangeDeviceName=_canChangeDeviceName - In the implementation block
@property (assign,nonatomic) unsigned timestampPeriod; 
@property (nonatomic,readonly) BOOL hasInput; 
@property (nonatomic,readonly) BOOL hasOutput; 
@property (assign,nonatomic) unsigned inputLatency; 
@property (assign,nonatomic) unsigned outputLatency; 
@property (assign,nonatomic) unsigned inputSafetyOffset; 
@property (assign,nonatomic) unsigned outputSafetyOffset; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> ioReferenceQueue; 
@property (assign,nonatomic) unsigned transportType; 
@property (assign,nonatomic) unsigned clockDomain; 
@property (assign,nonatomic) unsigned clockAlgorithm; 
@property (assign,nonatomic) BOOL clockIsStable; 
@property (nonatomic,copy) NSDictionary * clientDescription; 
@property (nonatomic,copy) NSDictionary * deviceDescription; 
@property (nonatomic,copy) id getZeroTimestampBlock;                                                                   //@synthesize getZeroTimestampBlock=_getZeroTimestampBlock - In the implementation block
@property (nonatomic,copy) id willDoReadInputBlock;                                                                    //@synthesize willDoReadInputBlock=_willDoReadInputBlock - In the implementation block
@property (nonatomic,copy) id willDoConvertInputBlock;                                                                 //@synthesize willDoConvertInputBlock=_willDoConvertInputBlock - In the implementation block
@property (nonatomic,copy) id willDoProcessInputBlock;                                                                 //@synthesize willDoProcessInputBlock=_willDoProcessInputBlock - In the implementation block
@property (nonatomic,copy) id willDoProcessOutputBlock;                                                                //@synthesize willDoProcessOutputBlock=_willDoProcessOutputBlock - In the implementation block
@property (nonatomic,copy) id willDoMixOutputBlock;                                                                    //@synthesize willDoMixOutputBlock=_willDoMixOutputBlock - In the implementation block
@property (nonatomic,copy) id willDoProcessMixBlock;                                                                   //@synthesize willDoProcessMixBlock=_willDoProcessMixBlock - In the implementation block
@property (nonatomic,copy) id willDoConvertMixBlock;                                                                   //@synthesize willDoConvertMixBlock=_willDoConvertMixBlock - In the implementation block
@property (nonatomic,copy) id willDoWriteMixBlock;                                                                     //@synthesize willDoWriteMixBlock=_willDoWriteMixBlock - In the implementation block
-(void)dealloc;
-(BOOL)isRunning;
-(unsigned)objectClass;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(unsigned)transportType;
-(void)setTransportType:(unsigned)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(NSString *)manufacturerName;
-(unsigned)inputLatency;
-(unsigned)outputLatency;
-(unsigned)inputSafetyOffset;
-(unsigned)outputSafetyOffset;
-(NSString *)modelName;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)hasInput;
-(id)controls;
-(void)systemWillSleep;
-(int)removeClient:(const AudioServerPlugInClientInfo*)arg1 ;
-(NSString *)deviceUID;
-(void)setManufacturerName:(NSString *)arg1 ;
-(int)addClient:(const AudioServerPlugInClientInfo*)arg1 ;
-(void)setModelName:(NSString *)arg1 ;
-(NSArray *)samplingRates;
-(void)setClientDescription:(NSDictionary *)arg1 ;
-(NSDictionary *)clientDescription;
-(NSDictionary *)deviceDescription;
-(id)initWithPlugin:(id)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(BOOL)canBeDefaultDevice;
-(BOOL)canBeDefaultSystemDevice;
-(NSString *)modelUID;
-(unsigned)clockDomain;
-(id)inputStreams;
-(id)outputStreams;
-(BOOL)hasOutput;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(id)driverClassName;
-(double)samplingRate;
-(unsigned)timestampPeriod;
-(void)systemHasPoweredOn;
-(void)setSamplingRate:(double)arg1 ;
-(void)requestConfigurationChange:(/*^block*/id)arg1 ;
-(/*^block*/id*)getZeroTimestampBlockUnretainedPtr;
-(/*^block*/id*)willDoReadInputBlockUnretainedPtr;
-(/*^block*/id*)willDoConvertInputBlockUnretainedPtr;
-(/*^block*/id*)willDoProcessInputBlockUnretainedPtr;
-(/*^block*/id*)willDoProcessOutputBlockUnretainedPtr;
-(/*^block*/id*)willDoMixOutputBlockUnretainedPtr;
-(/*^block*/id*)willDoProcessMixBlockUnretainedPtr;
-(/*^block*/id*)willDoConvertMixBlockUnretainedPtr;
-(/*^block*/id*)willDoWriteMixBlockUnretainedPtr;
-(/*^block*/id*)beginIOOperationBlockUnretainedPtr;
-(/*^block*/id*)endIOOperationBlockUnretainedPtr;
-(void)performConfigurationChange:(void*)arg1 ;
-(BOOL)isPropertySettable:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)setProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(int)startIOForClient:(unsigned)arg1 ;
-(int)stopIOForClient:(unsigned)arg1 ;
-(void)setModelUID:(NSString *)arg1 ;
-(void)preferredChannelsForLeft:(unsigned*)arg1 andRight:(unsigned*)arg2 ;
-(unsigned)numberOfChannelsInLayoutForScope:(unsigned)arg1 ;
-(void)preferredChannelDescriptions:(AudioChannelDescription*)arg1 forScope:(unsigned)arg2 ;
-(unsigned)clockAlgorithm;
-(BOOL)clockIsStable;
-(BOOL)canChangeDeviceName;
-(BOOL)changeDeviceName:(id)arg1 ;
-(BOOL)changeSamplingRate:(double)arg1 ;
-(BOOL)changeClientDescription:(id)arg1 ;
-(id<ASDDeviceConfigurationChangeDelegate>)configurationChangeDelegate;
-(int)performStartIO;
-(int)performStopIO;
-(id)getZeroTimestampBlock;
-(id)willDoReadInputBlock;
-(id)willDoConvertInputBlock;
-(id)willDoProcessInputBlock;
-(id)willDoProcessOutputBlock;
-(id)willDoMixOutputBlock;
-(id)willDoProcessMixBlock;
-(id)willDoConvertMixBlock;
-(id)willDoWriteMixBlock;
-(id)beginIOOperationBlock;
-(id)endIOOperationBlock;
-(void)_updateTimestampPeriod:(double)arg1 ;
-(void)_updateSafetyOffsets:(double)arg1 ;
-(id)initWithDeviceUID:(id)arg1 withPlugin:(id)arg2 ;
-(void)addInputStream:(id)arg1 ;
-(void)removeInputStream:(id)arg1 ;
-(void)addOutputStream:(id)arg1 ;
-(void)removeOutputStream:(id)arg1 ;
-(void)addControl:(id)arg1 ;
-(void)removeControl:(id)arg1 ;
-(void)setSamplingRates:(NSArray *)arg1 ;
-(void)setDeviceDescription:(NSDictionary *)arg1 ;
-(void)setTimestampPeriod:(unsigned)arg1 ;
-(void)updateTimestampPeriod;
-(NSObject*<OS_dispatch_queue>)ioReferenceQueue;
-(void)setInputLatency:(unsigned)arg1 ;
-(void)setOutputLatency:(unsigned)arg1 ;
-(void)setInputSafetyOffset:(unsigned)arg1 ;
-(void)setOutputSafetyOffset:(unsigned)arg1 ;
-(void)setClockDomain:(unsigned)arg1 ;
-(void)setClockAlgorithm:(unsigned)arg1 ;
-(void)setClockIsStable:(BOOL)arg1 ;
-(void)setGetZeroTimestampBlock:(id)arg1 ;
-(void)setWillDoReadInputBlock:(id)arg1 ;
-(void)setWillDoConvertInputBlock:(id)arg1 ;
-(void)setWillDoProcessInputBlock:(id)arg1 ;
-(void)setWillDoProcessOutputBlock:(id)arg1 ;
-(void)setWillDoMixOutputBlock:(id)arg1 ;
-(void)setWillDoProcessMixBlock:(id)arg1 ;
-(void)setWillDoConvertMixBlock:(id)arg1 ;
-(void)setWillDoWriteMixBlock:(id)arg1 ;
-(void)setBeginIOOperationBlock:(id)arg1 ;
-(void)setEndIOOperationBlock:(id)arg1 ;
-(void)setCanBeDefaultDevice:(BOOL)arg1 ;
-(void)setCanBeDefaultSystemDevice:(BOOL)arg1 ;
-(void)setCanChangeDeviceName:(BOOL)arg1 ;
-(void)setConfigurationChangeDelegate:(id<ASDDeviceConfigurationChangeDelegate>)arg1 ;
-(id)getProperty:(id)arg1 ;
@end

