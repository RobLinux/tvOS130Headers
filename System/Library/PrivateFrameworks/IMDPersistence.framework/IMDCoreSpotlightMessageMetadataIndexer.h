/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDPersistence/IMDCoreSpotlightBaseIndexer.h>
#import <IMDPersistence/IMDCoreSpotlightIndexer.h>

@class NSString;

@interface IMDCoreSpotlightMessageMetadataIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)cancelIndexingForItem:(id)arg1 ;
+(void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(BOOL)arg3 metadataToUpdate:(id)arg4 ;
@end

