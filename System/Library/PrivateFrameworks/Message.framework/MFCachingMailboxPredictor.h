/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailboxPredictor.h>

@protocol MFMailboxPredictor;
@class NSCache, NSMutableDictionary, NSString;

@interface MFCachingMailboxPredictor : NSObject <MFMailboxPredictor> {

	id<MFMailboxPredictor> _predictor;
	NSCache* _cache;
	NSMutableDictionary* _cacheKeysByProperty;

}

@property (nonatomic,retain) id<MFMailboxPredictor> predictor;                       //@synthesize predictor=_predictor - In the implementation block
@property (nonatomic,retain) NSCache * cache;                                        //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheKeysByProperty;              //@synthesize cacheKeysByProperty=_cacheKeysByProperty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSCache *)cache;
-(void)setCache:(NSCache *)arg1 ;
-(id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2 diagnostics:(id*)arg3 ;
-(void)setPredictor:(id<MFMailboxPredictor>)arg1 ;
-(void)setCacheKeysByProperty:(NSMutableDictionary *)arg1 ;
-(id)_cacheKeyForMessages:(id)arg1 ;
-(id<MFMailboxPredictor>)predictor;
-(id)_propertyKeysForMessage:(id)arg1 ;
-(void)_trackCacheKey:(id)arg1 forPropertyKey:(id)arg2 ;
-(NSMutableDictionary *)cacheKeysByProperty;
-(id)initWithPredictor:(id)arg1 ;
-(void)invalidatePredictionsAffectedByMessages:(id)arg1 ;
-(void)removeAllPredictions;
@end

