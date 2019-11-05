/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSMutableArray;

@interface PXPhotosDetailsLoadCoordinator : NSObject {

	NSHashTable* __tokens;
	NSMutableArray* __relatedBlocks;
	NSMutableArray* __suggestionsBlocks;
	double _timeoutDelay;

}

@property (nonatomic,readonly) NSHashTable * _tokens;                            //@synthesize _tokens=__tokens - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _relatedBlocks;                  //@synthesize _relatedBlocks=__relatedBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _suggestionsBlocks;              //@synthesize _suggestionsBlocks=__suggestionsBlocks - In the implementation block
@property (assign,nonatomic) double timeoutDelay;                                //@synthesize timeoutDelay=_timeoutDelay - In the implementation block
+(id)loadCoordinatorForContext:(id)arg1 ;
-(id)init;
-(NSHashTable *)_tokens;
-(id)_createToken;
-(id)tokenForCuratedFetch;
-(id)tokenForLivePhotoVariations;
-(void)performBlockWhenReadyToFetchRelated:(/*^block*/id)arg1 ;
-(void)performBlockWhenReadyToFetchSuggestions:(/*^block*/id)arg1 ;
-(void)_tokenDidComplete:(id)arg1 ;
-(BOOL)_canPerformRelatedFetch;
-(BOOL)_canPerformSuggestionsFetch;
-(NSMutableArray *)_relatedBlocks;
-(NSMutableArray *)_suggestionsBlocks;
-(double)timeoutDelay;
-(void)setTimeoutDelay:(double)arg1 ;
@end

