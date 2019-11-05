/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSIGroupResult, NSArray, NSString;

@interface PLSearchResult : NSObject {

	PSIGroupResult* _groupResult;

}

@property (nonatomic,readonly) PSIGroupResult * groupResult;                 //@synthesize groupResult=_groupResult - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long categoryMask; 
@property (nonatomic,readonly) NSArray * searchTokens; 
@property (nonatomic,readonly) NSArray * contentStrings; 
@property (nonatomic,readonly) NSArray * lookupIdentifiers; 
@property (nonatomic,readonly) NSArray * matchRanges; 
@property (nonatomic,readonly) NSString * transientToken; 
@property (nonatomic,readonly) NSString * keyAssetUUID; 
@property (nonatomic,readonly) unsigned long long assetCount; 
@property (nonatomic,readonly) NSString * groupDescription; 
@property (readonly) NSString * owningContentString; 
-(unsigned long long)type;
-(long long)categoryAtIndex:(long long)arg1 ;
-(unsigned long long)assetCount;
-(unsigned long long)groupCount;
-(NSString *)keyAssetUUID;
-(unsigned long long)categoryMask;
-(NSString *)groupDescription;
-(id)initWithGroupResult:(id)arg1 ;
-(NSArray *)searchTokens;
-(NSArray *)contentStrings;
-(NSArray *)lookupIdentifiers;
-(NSArray *)matchRanges;
-(NSString *)transientToken;
-(NSString *)owningContentString;
-(id)tokensAtIndex:(long long)arg1 ;
-(id)matchRangesAtIndex:(long long)arg1 ;
-(BOOL)isContentStringTextSearchableAtIndex:(long long)arg1 ;
-(BOOL)isMatchedByIdentifierAtIndex:(long long)arg1 ;
-(BOOL)isImplicitlyTokenized;
-(PSIGroupResult *)groupResult;
@end

