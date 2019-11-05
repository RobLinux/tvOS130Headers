/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDObject.h>

@protocol OS_dispatch_queue;
@class ASDStreamFormat, NSArray, NSObject, NSMutableArray, NSString;

@interface ASDStream : ASDObject {

	ASDStreamFormat* _physicalFormat;
	NSArray* _physicalFormats;
	NSObject*<OS_dispatch_queue> _physicalFormatQueue;
	NSMutableArray* _controls;
	NSObject*<OS_dispatch_queue> _controlQueue;
	NSString* _streamName;
	unsigned _latency;
	BOOL _isTapStream;
	/*^block*/id _readInputBlockUnretained;
	/*^block*/id _convertInputBlockUnretained;
	/*^block*/id _processInputBlockUnretained;
	/*^block*/id _processOutputBlockUnretained;
	/*^block*/id _mixOutputBlockUnretained;
	/*^block*/id _processMixBlockUnretained;
	/*^block*/id _convertMixBlockUnretained;
	/*^block*/id _writeMixBlockUnretained;
	BOOL _isActive;
	BOOL _physicalFormatSettable;
	unsigned _direction;
	unsigned _startingChannel;
	unsigned _terminalType;
	/*^block*/id _readInputBlock;
	/*^block*/id _convertInputBlock;
	/*^block*/id _processInputBlock;
	/*^block*/id _processOutputBlock;
	/*^block*/id _mixOutputBlock;
	/*^block*/id _processMixBlock;
	/*^block*/id _convertMixBlock;
	/*^block*/id _writeMixBlock;

}

@property (nonatomic,readonly) /*^block*/id* readInputBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* convertInputBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* processInputBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* processOutputBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* mixOutputBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* processMixBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* convertMixBlockUnretainedPtr; 
@property (nonatomic,readonly) /*^block*/id* writeMixBlockUnretainedPtr; 
@property (assign,nonatomic) BOOL isActive;                                                            //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) unsigned latency; 
@property (nonatomic,copy) NSString * streamName; 
@property (assign,nonatomic) unsigned direction;                                                       //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) unsigned startingChannel;                                                 //@synthesize startingChannel=_startingChannel - In the implementation block
@property (nonatomic,copy) ASDStreamFormat * physicalFormat; 
@property (assign,getter=isPhysicalFormatSettable,nonatomic) BOOL physicalFormatSettable;              //@synthesize physicalFormatSettable=_physicalFormatSettable - In the implementation block
@property (nonatomic,copy) NSArray * physicalFormats; 
@property (assign,nonatomic) unsigned terminalType;                                                    //@synthesize terminalType=_terminalType - In the implementation block
@property (assign,nonatomic) BOOL isTapStream; 
@property (nonatomic,copy) id readInputBlock;                                                          //@synthesize readInputBlock=_readInputBlock - In the implementation block
@property (nonatomic,copy) id convertInputBlock;                                                       //@synthesize convertInputBlock=_convertInputBlock - In the implementation block
@property (nonatomic,copy) id processInputBlock;                                                       //@synthesize processInputBlock=_processInputBlock - In the implementation block
@property (nonatomic,copy) id processOutputBlock;                                                      //@synthesize processOutputBlock=_processOutputBlock - In the implementation block
@property (nonatomic,copy) id mixOutputBlock;                                                          //@synthesize mixOutputBlock=_mixOutputBlock - In the implementation block
@property (nonatomic,copy) id processMixBlock;                                                         //@synthesize processMixBlock=_processMixBlock - In the implementation block
@property (nonatomic,copy) id convertMixBlock;                                                         //@synthesize convertMixBlock=_convertMixBlock - In the implementation block
@property (nonatomic,copy) id writeMixBlock;                                                           //@synthesize writeMixBlock=_writeMixBlock - In the implementation block
-(BOOL)isActive;
-(unsigned)scope;
-(unsigned)latency;
-(void)setLatency:(unsigned)arg1 ;
-(void)setStreamName:(NSString *)arg1 ;
-(NSString *)streamName;
-(unsigned)direction;
-(void)setDirection:(unsigned)arg1 ;
-(BOOL)hasProperty:(const AudioObjectPropertyAddress*)arg1 ;
-(id)controls;
-(void)setIsActive:(BOOL)arg1 ;
-(unsigned)terminalType;
-(void)stopStream;
-(void)startStream;
-(id)initWithPlugin:(id)arg1 ;
-(unsigned)startingChannel;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(BOOL)isPhysicalFormatSettable;
-(ASDStreamFormat *)physicalFormat;
-(void)setPhysicalFormat:(ASDStreamFormat *)arg1 ;
-(unsigned)dataSizeForProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 andQualifierData:(const void*)arg3 ;
-(BOOL)getProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned*)arg4 andData:(void*)arg5 forClient:(int)arg6 ;
-(id)driverClassName;
-(id)readInputBlock;
-(id)writeMixBlock;
-(id)initWithDirection:(unsigned)arg1 withPlugin:(id)arg2 ;
-(BOOL)changePhysicalFormat:(id)arg1 ;
-(id)processOutputBlock;
-(/*^block*/id*)readInputBlockUnretainedPtr;
-(/*^block*/id*)convertInputBlockUnretainedPtr;
-(/*^block*/id*)processInputBlockUnretainedPtr;
-(/*^block*/id*)processOutputBlockUnretainedPtr;
-(/*^block*/id*)mixOutputBlockUnretainedPtr;
-(/*^block*/id*)processMixBlockUnretainedPtr;
-(/*^block*/id*)convertMixBlockUnretainedPtr;
-(/*^block*/id*)writeMixBlockUnretainedPtr;
-(BOOL)isPropertySettable:(const AudioObjectPropertyAddress*)arg1 ;
-(BOOL)setProperty:(const AudioObjectPropertyAddress*)arg1 withQualifierSize:(unsigned)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned)arg4 andData:(const void*)arg5 forClient:(int)arg6 ;
-(id)channelNameForChannelIndex:(unsigned)arg1 ;
-(id)channelCategoryForChannelIndex:(unsigned)arg1 ;
-(id)channelNumberForChannelIndex:(unsigned)arg1 ;
-(BOOL)deviceChangedToSamplingRate:(double)arg1 ;
-(void)addControl:(id)arg1 ;
-(void)removeControl:(id)arg1 ;
-(BOOL)isTapStream;
-(void)setIsTapStream:(BOOL)arg1 ;
-(id)convertInputBlock;
-(id)processInputBlock;
-(id)mixOutputBlock;
-(id)processMixBlock;
-(id)convertMixBlock;
-(NSArray *)physicalFormats;
-(void)addPhysicalFormat:(id)arg1 ;
-(void)removePhysicalFormat:(id)arg1 ;
-(void)setPhysicalFormats:(NSArray *)arg1 ;
-(void)setReadInputBlock:(id)arg1 ;
-(void)setConvertInputBlock:(id)arg1 ;
-(void)setProcessInputBlock:(id)arg1 ;
-(void)setProcessOutputBlock:(id)arg1 ;
-(void)setMixOutputBlock:(id)arg1 ;
-(void)setProcessMixBlock:(id)arg1 ;
-(void)setConvertMixBlock:(id)arg1 ;
-(void)setWriteMixBlock:(id)arg1 ;
-(void)setStartingChannel:(unsigned)arg1 ;
-(void)setPhysicalFormatSettable:(BOOL)arg1 ;
-(void)setTerminalType:(unsigned)arg1 ;
@end

