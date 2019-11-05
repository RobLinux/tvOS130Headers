/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/AFAceCommandDialogInfoExtracting.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSDictionary, NSString;

@interface SAAceView : SABaseAceObject <AFAceCommandDialogInfoExtracting, SAAceSerializable>

@property (assign,nonatomic) BOOL canBeRefreshed; 
@property (assign,nonatomic) BOOL canUseServerTTS; 
@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSNumber * deferredRendering; 
@property (nonatomic,copy) NSNumber * listenAfterSpeaking; 
@property (nonatomic,copy) NSDictionary * speakableContextInfo; 
@property (nonatomic,copy) NSString * speakableText; 
@property (nonatomic,copy) NSString * viewId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceView;
+(id)aceViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)_af_extractDialogInfo:(/*^block*/id)arg1 ;
-(id)_af_dialogPhase;
-(id)_af_dialogIdentifier;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id<SAAceSerializable>)context;
-(id)groupIdentifier;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
-(id)encodedClassName;
-(NSString *)viewId;
-(void)setViewId:(NSString *)arg1 ;
-(BOOL)canUseServerTTS;
-(void)setCanUseServerTTS:(BOOL)arg1 ;
-(NSNumber *)listenAfterSpeaking;
-(void)setListenAfterSpeaking:(NSNumber *)arg1 ;
-(NSString *)speakableText;
-(void)setSpeakableText:(NSString *)arg1 ;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(BOOL)canBeRefreshed;
-(void)setCanBeRefreshed:(BOOL)arg1 ;
-(NSNumber *)deferredRendering;
-(void)setDeferredRendering:(NSNumber *)arg1 ;
@end

