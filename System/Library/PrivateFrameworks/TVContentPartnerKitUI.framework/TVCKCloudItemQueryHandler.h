/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVCKCloudQueryHandler.h>

@interface TVCKCloudItemQueryHandler : TVCKCloudQueryHandler
+(id)atvMediaItemsForTrackIDs:(id)arg1 mlLibrary:(id)arg2 dataClient:(id)arg3 propertiesRequested:(id)arg4 ;
+(id)mlQueryPropertyForATVProperty:(id)arg1 ;
+(id)_mlPropertiesForATVProperties:(id)arg1 ;
+(id)_bookmarkForStoreID:(id)arg1 mediaType:(id)arg2 ;
+(BOOL)_evaluateNumericFilter:(id)arg1 dataToTest:(unsigned long long)arg2 ;
+(id)_tvckDataTypeForMLMediaType:(unsigned)arg1 ;
+(id)mlPredicatePropertyForATVProperty:(id)arg1 ;
+(id)mlPropertyForATVProperty:(id)arg1 ;
+(id)atvMediaItemsForCloudIDs:(id)arg1 mlLibrary:(id)arg2 dataClient:(id)arg3 propertiesRequested:(id)arg4 ;
-(void)_handleQuery:(id)arg1 ;
-(void)_handleDAAPQuery:(id)arg1 ;
-(id)_orderingTermsForProperty:(id)arg1 ;
-(unsigned long long)_filterContainerTypeFromQuery:(id)arg1 ;
-(id)_mlQueryForATVMediaQuery:(id)arg1 playlist:(id*)arg2 usingSections:(BOOL*)arg3 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 inResponseBuffer:(id)arg3 ;
-(unsigned long long)_filterContainerTypeFromDataFilter:(id)arg1 ;
-(void)handleQuery:(id)arg1 withContext:(void*)arg2 ;
@end

