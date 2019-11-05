/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGSuggester.h>

@class PGSuggestionSession, NSString;

@interface PGAbstractSuggester : NSObject <PGSuggester> {

	PGSuggestionSession* _session;

}

@property (assign,nonatomic,__weak) PGSuggestionSession * session;              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggesterWithSession:(id)arg1 ;
+(id)suggestionTypes;
+(id)suggestionSubtypes;
+(id)sharingSuggestionResultsForMomentNodes:(id)arg1 ;
+(id)suggestedPersonLocalIdentifiersFromSharingSuggestionResults:(id)arg1 forMomentNodes:(id)arg2 containsUnverifiedPersons:(BOOL*)arg3 ;
+(id)assetCollectionFilteringSharedAssetsForAssetCollection:(id)arg1 loggingConnection:(id)arg2 ;
-(PGSuggestionSession *)session;
-(id)initWithSession:(id)arg1 ;
-(void)setSession:(PGSuggestionSession *)arg1 ;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(id)reasonsForSuggestion:(id)arg1 ;
@end
