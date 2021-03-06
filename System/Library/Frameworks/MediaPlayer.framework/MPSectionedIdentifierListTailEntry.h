/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPSectionedIdentifierListEntry.h>
#import <MediaPlayer/MPSectionedIdentifierListEnumerationTrackingEntry.h>

@class NSString, MPSectionedIdentifierListHeadEntry;

@interface MPSectionedIdentifierListTailEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry> {

	MPSectionedIdentifierListHeadEntry* _sectionHeadEntry;

}

@property (assign,nonatomic,__weak) MPSectionedIdentifierListHeadEntry * sectionHeadEntry;              //@synthesize sectionHeadEntry=_sectionHeadEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType; 
@property (nonatomic,readonly) NSString * sectionIdentifier; 
+(id)tailEntryWithSectionHeadEntry:(id)arg1 ;
-(long long)entryType;
-(id)previousEntry;
-(MPSectionedIdentifierListHeadEntry *)sectionHeadEntry;
-(void)setSectionHeadEntry:(MPSectionedIdentifierListHeadEntry *)arg1 ;
@end

