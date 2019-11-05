/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEOFailedTicket.h>
#import <GeoServices/GEOMapServiceCompletionTicket.h>

@class NSString, GEOMapServiceTraits, NSDictionary;

@interface _GEOFailedCompletionTicket : _GEOFailedTicket <GEOMapServiceCompletionTicket> {

	NSString* searchQuery;
	NSString* _searchQuery;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) SCD_Struct_GE2 dataRequestKind; 
@property (getter=_searchQuery,nonatomic,readonly) NSString * searchQuery;              //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
-(BOOL)shouldDisplayNoResults;
-(BOOL)hasShouldDisplayNoResults;
-(double)retainSearchTime;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(void)applyToPlaceInfo:(id)arg1 ;
-(id)initWithError:(id)arg1 searchQuery:(id)arg2 traits:(id)arg3 ;
-(id)_searchQuery;
-(void)submitWithAutoCompletionHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(BOOL)matchesFragment:(id)arg1 ;
-(void)applyToSuggestionList:(id)arg1 ;
-(void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2 ;
-(BOOL)isRapEnabled;
-(id)clientRankingModel;
-(id)sortPriorityMapping;
-(BOOL)autocompleteTopSectionIsQuerySuggestions;
-(BOOL)showAutocompleteClientSource;
@end

