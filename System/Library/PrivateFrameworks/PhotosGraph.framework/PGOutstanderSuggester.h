/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <PhotosGraph/PGCoordinatableSuggester.h>

@class PGSuggestionOptions, NSDictionary, NSArray, NSEnumerator, NSString;

@interface PGOutstanderSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {

	PGSuggestionOptions* _options;
	NSDictionary* _assetUUIDsByScore;
	NSArray* _sortedScores;
	long long _currentScoreIndex;
	NSEnumerator* _currentSuggestedAssetEnumerator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
-(void)reset;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)reasonsForSuggestion:(id)arg1 ;
-(void)startSuggestingWithOptions:(id)arg1 ;
-(id)nextSuggestion;
-(void)computeNiceAssetsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(unsigned long long)scoreWithAsset:(id)arg1 ;
-(id)nextSuggestedAsset;
-(id)nextSuggestedAssetEnumerator;
@end

