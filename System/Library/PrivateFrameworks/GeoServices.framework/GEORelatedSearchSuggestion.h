/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDRelatedSearchSuggestion, NSString;

@interface GEORelatedSearchSuggestion : NSObject {

	GEOPDRelatedSearchSuggestion* _relatedSearchSuggestion;

}

@property (nonatomic,retain) GEOPDRelatedSearchSuggestion * relatedSearchSuggestion;              //@synthesize relatedSearchSuggestion=_relatedSearchSuggestion - In the implementation block
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSString * searchBarDisplayToken; 
-(id)_suggestionEntryMetadata;
-(id)initWithPDRelatedSearchSuggestion:(id)arg1 ;
-(NSString *)displayString;
-(GEOPDRelatedSearchSuggestion *)relatedSearchSuggestion;
-(void)setRelatedSearchSuggestion:(GEOPDRelatedSearchSuggestion *)arg1 ;
-(NSString *)searchBarDisplayToken;
@end

