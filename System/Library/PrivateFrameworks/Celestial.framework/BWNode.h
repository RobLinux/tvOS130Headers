/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWNodeRenderDelegate;
#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, NSString, BWGraph, BWNodeInput, BWNodeOutput, NSArray;

@interface BWNode : NSObject {

	NSMutableArray* _inputs;
	NSMutableArray* _outputs;
	NSString* _name;
	NSString* _subgraphName;
	BOOL _supportsConcurrentLiveInputCallbacks;
	BOOL _supportsLiveReconfiguration;
	BOOL _singleInput;
	BOOL _singleOutput;
	BWGraph* _graph;
	id<BWNodeRenderDelegate> _renderDelegate;
	long long _configurationID;
	BWNodeInput* _input;
	BWNodeOutput* _output;

}

@property (assign,nonatomic) BOOL supportsConcurrentLiveInputCallbacks;              //@synthesize supportsConcurrentLiveInputCallbacks=_supportsConcurrentLiveInputCallbacks - In the implementation block
@property (assign,nonatomic) BOOL supportsLiveReconfiguration;                       //@synthesize supportsLiveReconfiguration=_supportsLiveReconfiguration - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * subgraphName;                                  //@synthesize subgraphName=_subgraphName - In the implementation block
@property (readonly) NSString * nodeType; 
@property (readonly) NSString * nodeSubType; 
@property (readonly) NSArray * inputs; 
@property (readonly) NSArray * outputs; 
@property (readonly) BWNodeInput * input; 
@property (readonly) BWNodeOutput * output; 
@property (assign,nonatomic) id<BWNodeRenderDelegate> renderDelegate;                //@synthesize renderDelegate=_renderDelegate - In the implementation block
@property (nonatomic,readonly) BOOL hasNonLiveConfigurationChanges; 
@property (assign,nonatomic) BWGraph * graph;                                        //@synthesize graph=_graph - In the implementation block
+(void)initialize;
-(NSString *)name;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(BWNodeInput *)input;
-(void)setConfigurationID:(long long)arg1 ;
-(long long)configurationID;
-(BWGraph *)graph;
-(void)setGraph:(BWGraph *)arg1 ;
-(BWNodeOutput *)output;
-(void)addInput:(id)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(NSString *)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)addOutput:(id)arg1 ;
-(void)setSupportsLiveReconfiguration:(BOOL)arg1 ;
-(NSString *)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(NSArray *)outputs;
-(BOOL)allInputsHaveReachedState:(int)arg1 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(NSArray *)inputs;
-(void)_handleMessage:(id)arg1 fromInput:(id)arg2 ;
-(void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2 ;
-(void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 forInput:(id)arg4 ;
-(void)setSupportsConcurrentLiveInputCallbacks:(BOOL)arg1 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(id<BWNodeRenderDelegate>)renderDelegate;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(void)setRenderDelegate:(id<BWNodeRenderDelegate>)arg1 ;
-(BOOL)supportsConcurrentLiveInputCallbacks;
-(void)setSubgraphName:(NSString *)arg1 ;
-(NSString *)subgraphName;
-(BOOL)supportsLiveReconfiguration;
@end

