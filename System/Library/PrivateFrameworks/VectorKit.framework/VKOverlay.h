/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorOverlayDelegate.h>

@protocol VKOverlayDelegate;
@class VKVectorOverlayData, NSString;

@interface VKOverlay : NSObject <VKVectorOverlayDelegate> {

	BOOL _canProvideVectorGeometry;
	id<VKOverlayDelegate> _delegate;
	SCD_Struct_VK294 _replaceMapContentInRect;
	unsigned long long _level;
	weak_ptr<md::GlobeOverlayContainer>* _flyoverContainer;
	weak_ptr<md::OverlayContainer>* _standardContainer;
	RunLoopController* _runLoopController;
	VKVectorOverlayData* _vectorData;
	unfair_lock _vectorDataLock;
	BOOL _canProvideVectorData;

}

@property (assign,nonatomic) weak_ptr<md::GlobeOverlayContainer>* flyoverContainer; 
@property (assign,nonatomic) weak_ptr<md::OverlayContainer>* standardContainer; 
@property (assign,nonatomic) RunLoopController* runLoopController;                               //@synthesize runLoopController=_runLoopController - In the implementation block
@property (assign,nonatomic) id<VKOverlayDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL canProvideVectorData;                                                  //@synthesize canProvideVectorData=_canProvideVectorData - In the implementation block
@property (assign,nonatomic) SCD_Struct_VK294 replaceMapContentInRect;                           //@synthesize replaceMapContentInRect=_replaceMapContentInRect - In the implementation block
@property (assign,nonatomic) unsigned long long level;                                           //@synthesize level=_level - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<VKOverlayDelegate>)delegate;
-(void)setDelegate:(id<VKOverlayDelegate>)arg1 ;
-(unsigned long long)level;
-(void)setLevel:(unsigned long long)arg1 ;
-(void)setStandardContainer:(weak_ptr<md::OverlayContainer>*)arg1 ;
-(void)setRunLoopController:(RunLoopController*)arg1 ;
-(weak_ptr<md::OverlayContainer>*)standardContainer;
-(RunLoopController*)runLoopController;
-(SCD_Struct_VK294)replaceMapContentInRect;
-(void)setFlyoverContainer:(weak_ptr<md::GlobeOverlayContainer>*)arg1 ;
-(BOOL)canDrawKey:(const SCD_Struct_VK408*)arg1 ;
-(void)drawKey:(const SCD_Struct_VK408*)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)canProvideVectorData;
-(id)vectorData;
-(void)vectorOverlayNeedsDisplay:(id)arg1 needsFullInvalidate:(BOOL)arg2 ;
-(void)_updateVectorData;
-(void)setNeedsDisplayInRect:(const SCD_Struct_VK294*)arg1 level:(long long)arg2 reason:(unsigned long long)arg3 ;
-(void)setNeedsDisplayForReason:(unsigned long long)arg1 ;
-(weak_ptr<md::GlobeOverlayContainer>*)flyoverContainer;
-(void)setReplaceMapContentInRect:(SCD_Struct_VK294)arg1 ;
@end

