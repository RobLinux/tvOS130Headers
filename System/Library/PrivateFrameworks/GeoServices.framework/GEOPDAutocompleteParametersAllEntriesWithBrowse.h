/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData, GEOPDAutocompleteEntry, NSString, GEOPDRetainedSearchMetadata, GEOPDVenueIdentifier, GEOPDViewportInfo;

@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _supportedAutocompleteResultCellTypes;
	SCD_Struct_GE1* _supportedListTypes;
	NSData* _categorySuggestionEntryMetadata;
	GEOPDAutocompleteEntry* _categorySuggestionEntry;
	GEOPDAutocompleteEntry* _querySuggestionEntry;
	NSString* _query;
	GEOPDRetainedSearchMetadata* _retainedSearch;
	GEOPDVenueIdentifier* _venueIdentifier;
	GEOPDViewportInfo* _viewportInfo;
	int _maxQueryBuilderSuggestions;
	int _maxResults;
	BOOL _highlightDiff;
	BOOL _interleaveCategorySuggestions;
	BOOL _supportClientRankingFeatureMetadata;
	BOOL _supportDirectionIntentSuggestions;
	BOOL _supportSectionHeader;
	BOOL _supportUnresolvedDirectionIntent;
	struct {
		unsigned has_maxQueryBuilderSuggestions : 1;
		unsigned has_maxResults : 1;
		unsigned has_highlightDiff : 1;
		unsigned has_interleaveCategorySuggestions : 1;
		unsigned has_supportClientRankingFeatureMetadata : 1;
		unsigned has_supportDirectionIntentSuggestions : 1;
		unsigned has_supportSectionHeader : 1;
		unsigned has_supportUnresolvedDirectionIntent : 1;
		unsigned read_unknownFields : 1;
		unsigned read_supportedAutocompleteResultCellTypes : 1;
		unsigned read_supportedListTypes : 1;
		unsigned read_categorySuggestionEntryMetadata : 1;
		unsigned read_categorySuggestionEntry : 1;
		unsigned read_querySuggestionEntry : 1;
		unsigned read_query : 1;
		unsigned read_retainedSearch : 1;
		unsigned read_venueIdentifier : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_supportedAutocompleteResultCellTypes : 1;
		unsigned wrote_supportedListTypes : 1;
		unsigned wrote_categorySuggestionEntryMetadata : 1;
		unsigned wrote_categorySuggestionEntry : 1;
		unsigned wrote_querySuggestionEntry : 1;
		unsigned wrote_query : 1;
		unsigned wrote_retainedSearch : 1;
		unsigned wrote_venueIdentifier : 1;
		unsigned wrote_viewportInfo : 1;
		unsigned wrote_maxQueryBuilderSuggestions : 1;
		unsigned wrote_maxResults : 1;
		unsigned wrote_highlightDiff : 1;
		unsigned wrote_interleaveCategorySuggestions : 1;
		unsigned wrote_supportClientRankingFeatureMetadata : 1;
		unsigned wrote_supportDirectionIntentSuggestions : 1;
		unsigned wrote_supportSectionHeader : 1;
		unsigned wrote_supportUnresolvedDirectionIntent : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) int maxResults; 
@property (assign,nonatomic) BOOL hasHighlightDiff; 
@property (assign,nonatomic) BOOL highlightDiff; 
@property (nonatomic,readonly) BOOL hasCategorySuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * categorySuggestionEntryMetadata; 
@property (nonatomic,readonly) BOOL hasCategorySuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * categorySuggestionEntry; 
@property (assign,nonatomic) BOOL hasInterleaveCategorySuggestions; 
@property (assign,nonatomic) BOOL interleaveCategorySuggestions; 
@property (nonatomic,readonly) BOOL hasVenueIdentifier; 
@property (nonatomic,retain) GEOPDVenueIdentifier * venueIdentifier; 
@property (assign,nonatomic) BOOL hasSupportDirectionIntentSuggestions; 
@property (assign,nonatomic) BOOL supportDirectionIntentSuggestions; 
@property (nonatomic,readonly) BOOL hasRetainedSearch; 
@property (nonatomic,retain) GEOPDRetainedSearchMetadata * retainedSearch; 
@property (assign,nonatomic) BOOL hasSupportUnresolvedDirectionIntent; 
@property (assign,nonatomic) BOOL supportUnresolvedDirectionIntent; 
@property (nonatomic,readonly) unsigned long long supportedListTypesCount; 
@property (nonatomic,readonly) int* supportedListTypes; 
@property (nonatomic,readonly) BOOL hasQuerySuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * querySuggestionEntry; 
@property (assign,nonatomic) BOOL hasSupportClientRankingFeatureMetadata; 
@property (assign,nonatomic) BOOL supportClientRankingFeatureMetadata; 
@property (assign,nonatomic) BOOL hasMaxQueryBuilderSuggestions; 
@property (assign,nonatomic) int maxQueryBuilderSuggestions; 
@property (assign,nonatomic) BOOL hasSupportSectionHeader; 
@property (assign,nonatomic) BOOL supportSectionHeader; 
@property (nonatomic,readonly) unsigned long long supportedAutocompleteResultCellTypesCount; 
@property (nonatomic,readonly) int* supportedAutocompleteResultCellTypes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)query;
-(id)dictionaryRepresentation;
-(void)setQuery:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readQuery;
-(BOOL)hasQuery;
-(void)clearSensitiveFields;
-(void)_readViewportInfo;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(int)maxResults;
-(void)setMaxResults:(int)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(BOOL)highlightDiff;
-(void)setHighlightDiff:(BOOL)arg1 ;
-(void)setHasHighlightDiff:(BOOL)arg1 ;
-(BOOL)hasHighlightDiff;
-(void)_readVenueIdentifier;
-(GEOPDVenueIdentifier *)venueIdentifier;
-(void)setVenueIdentifier:(GEOPDVenueIdentifier *)arg1 ;
-(BOOL)hasVenueIdentifier;
-(void)setCategorySuggestionEntryMetadata:(NSData *)arg1 ;
-(void)setCategorySuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(void)_readSupportedAutocompleteResultCellTypes;
-(void)_addNoFlagsSupportedAutocompleteResultCellType:(int)arg1 ;
-(unsigned long long)supportedAutocompleteResultCellTypesCount;
-(void)clearSupportedAutocompleteResultCellTypes;
-(int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedAutocompleteResultCellType:(int)arg1 ;
-(BOOL)supportUnresolvedDirectionIntent;
-(void)setSupportUnresolvedDirectionIntent:(BOOL)arg1 ;
-(void)setHasSupportUnresolvedDirectionIntent:(BOOL)arg1 ;
-(BOOL)hasSupportUnresolvedDirectionIntent;
-(BOOL)supportClientRankingFeatureMetadata;
-(void)setSupportClientRankingFeatureMetadata:(BOOL)arg1 ;
-(void)setHasSupportClientRankingFeatureMetadata:(BOOL)arg1 ;
-(BOOL)hasSupportClientRankingFeatureMetadata;
-(int*)supportedAutocompleteResultCellTypes;
-(void)setSupportedAutocompleteResultCellTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedAutocompleteResultCellTypesAsString:(int)arg1 ;
-(int)StringAsSupportedAutocompleteResultCellTypes:(id)arg1 ;
-(void)_readCategorySuggestionEntryMetadata;
-(void)_readCategorySuggestionEntry;
-(void)_readRetainedSearch;
-(void)_readSupportedListTypes;
-(void)_addNoFlagsSupportedListType:(int)arg1 ;
-(void)_readQuerySuggestionEntry;
-(NSData *)categorySuggestionEntryMetadata;
-(GEOPDAutocompleteEntry *)categorySuggestionEntry;
-(GEOPDRetainedSearchMetadata *)retainedSearch;
-(GEOPDAutocompleteEntry *)querySuggestionEntry;
-(BOOL)hasCategorySuggestionEntry;
-(BOOL)hasQuerySuggestionEntry;
-(void)setQuerySuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(void)setRetainedSearch:(GEOPDRetainedSearchMetadata *)arg1 ;
-(unsigned long long)supportedListTypesCount;
-(void)clearSupportedListTypes;
-(int)supportedListTypeAtIndex:(unsigned long long)arg1 ;
-(void)addSupportedListType:(int)arg1 ;
-(BOOL)hasCategorySuggestionEntryMetadata;
-(BOOL)interleaveCategorySuggestions;
-(void)setInterleaveCategorySuggestions:(BOOL)arg1 ;
-(void)setHasInterleaveCategorySuggestions:(BOOL)arg1 ;
-(BOOL)hasInterleaveCategorySuggestions;
-(BOOL)supportDirectionIntentSuggestions;
-(void)setSupportDirectionIntentSuggestions:(BOOL)arg1 ;
-(void)setHasSupportDirectionIntentSuggestions:(BOOL)arg1 ;
-(BOOL)hasSupportDirectionIntentSuggestions;
-(BOOL)hasRetainedSearch;
-(int*)supportedListTypes;
-(void)setSupportedListTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedListTypesAsString:(int)arg1 ;
-(int)StringAsSupportedListTypes:(id)arg1 ;
-(int)maxQueryBuilderSuggestions;
-(void)setMaxQueryBuilderSuggestions:(int)arg1 ;
-(void)setHasMaxQueryBuilderSuggestions:(BOOL)arg1 ;
-(BOOL)hasMaxQueryBuilderSuggestions;
-(BOOL)supportSectionHeader;
-(void)setSupportSectionHeader:(BOOL)arg1 ;
-(void)setHasSupportSectionHeader:(BOOL)arg1 ;
-(BOOL)hasSupportSectionHeader;
@end

