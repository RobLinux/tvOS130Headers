/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>
#import <MediaPlayer/MPModelRequestDetailedKeepLocalStatusRequesting.h>

@class MPMediaLibrary, NSArray, MPMediaQuery, NSString;

@interface MPModelLibraryRequest : MPModelRequest <MPModelRequestDetailedKeepLocalStatusRequesting> {

	BOOL _wantsDetailedKeepLocalRequestableResponse;
	MPMediaLibrary* _mediaLibrary;
	NSArray* _allowedItemIdentifiers;
	NSArray* _allowedSectionIdentifiers;
	NSArray* _scopedContainers;
	unsigned long long _filteringOptions;
	MPMediaQuery* _legacyMediaQuery;
	NSRange _contentRange;

}

@property (nonatomic,copy) MPMediaQuery * legacyMediaQuery;                               //@synthesize legacyMediaQuery=_legacyMediaQuery - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                               //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy) NSArray * allowedItemIdentifiers;                              //@synthesize allowedItemIdentifiers=_allowedItemIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * allowedSectionIdentifiers;                           //@synthesize allowedSectionIdentifiers=_allowedSectionIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * scopedContainers;                                    //@synthesize scopedContainers=_scopedContainers - In the implementation block
@property (assign,nonatomic) unsigned long long filteringOptions;                         //@synthesize filteringOptions=_filteringOptions - In the implementation block
@property (assign,nonatomic) NSRange contentRange;                                        //@synthesize contentRange=_contentRange - In the implementation block
@property (assign,nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse;              //@synthesize wantsDetailedKeepLocalRequestableResponse=_wantsDetailedKeepLocalRequestableResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(unsigned long long)filteringOptions;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(BOOL)wantsDetailedKeepLocalRequestableResponse;
-(void)setWantsDetailedKeepLocalRequestableResponse:(BOOL)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setLegacyMediaQuery:(MPMediaQuery *)arg1 ;
-(id)itemTranslationContext;
-(id)sectionTranslationContext;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(NSArray *)allowedItemIdentifiers;
-(void)setAllowedItemIdentifiers:(NSArray *)arg1 ;
-(NSArray *)allowedSectionIdentifiers;
-(void)setAllowedSectionIdentifiers:(NSArray *)arg1 ;
-(NSArray *)scopedContainers;
-(void)setScopedContainers:(NSArray *)arg1 ;
-(void)setFilteringOptions:(unsigned long long)arg1 ;
-(NSRange)contentRange;
-(void)setContentRange:(NSRange)arg1 ;
-(MPMediaQuery *)legacyMediaQuery;
@end

