/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSString, CPLContainerRelation;

@interface CPLContainerRelationChange : CPLRecordChange {

	NSString* _itemIdentifier;
	CPLContainerRelation* _relation;

}

@property (nonatomic,copy) NSString * itemIdentifier;                      //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) CPLContainerRelation * relation;              //@synthesize relation=_relation - In the implementation block
+(id)relationToContainerWithIdentifier:(id)arg1 ;
+(id)relationWithItemScopedIdentifier:(id)arg1 containerIdentifier:(id)arg2 ;
+(id)relationWithItemIdentifier:(id)arg1 containerIdentifier:(id)arg2 ;
-(id)description;
-(NSString *)itemIdentifier;
-(CPLContainerRelation *)relation;
-(void)setRelation:(CPLContainerRelation *)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(BOOL)supportsDeletion;
-(BOOL)supportsDirectDeletion;
-(id)scopedIdentifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(void)setItemScopedIdentifier:(id)arg1 ;
-(id)itemScopedIdentifier;
-(id)containerScopedIdentifier;
-(void)setContainerScopedIdentifier:(id)arg1 ;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(id)secondaryIdentifier;
-(void)setSecondaryIdentifier:(id)arg1 ;
-(id)scopedIdentifierForQuarantine;
-(BOOL)validateFullRecord;
-(id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(BOOL)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4 ;
@end

