/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSMutableSet, CKServerChangeToken;

@interface PFCloudKitImportDatabaseContext : NSObject {

	NSSet* _interestingZoneIDs;
	NSMutableSet* _changedRecordZoneIDs;
	NSMutableSet* _deletedRecordZoneIDs;
	NSMutableSet* _purgedRecordZoneIDs;
	CKServerChangeToken* _updatedChangeToken;

}

@property (nonatomic,copy,readonly) NSSet * interestingZoneIDs;                     //@synthesize interestingZoneIDs=_interestingZoneIDs - In the implementation block
@property (nonatomic,readonly) NSSet * changedRecordZoneIDs;                        //@synthesize changedRecordZoneIDs=_changedRecordZoneIDs - In the implementation block
@property (nonatomic,readonly) NSSet * deletedRecordZoneIDs;                        //@synthesize deletedRecordZoneIDs=_deletedRecordZoneIDs - In the implementation block
@property (nonatomic,readonly) NSSet * purgedRecordZoneIDs;                         //@synthesize purgedRecordZoneIDs=_purgedRecordZoneIDs - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * updatedChangeToken;              //@synthesize updatedChangeToken=_updatedChangeToken - In the implementation block
-(id)description;
-(void)dealloc;
-(id)initWithInterestingZoneIDs:(id)arg1 ;
-(void)zoneWithIDChanged:(id)arg1 ;
-(void)zoneWithIDWasDeleted:(id)arg1 ;
-(void)zoneWithIDWasPurged:(id)arg1 ;
-(void)setUpdatedChangeToken:(CKServerChangeToken *)arg1 ;
-(BOOL)hasWorkToDo;
-(CKServerChangeToken *)updatedChangeToken;
-(NSSet *)changedRecordZoneIDs;
-(NSSet *)deletedRecordZoneIDs;
-(NSSet *)purgedRecordZoneIDs;
-(NSSet *)interestingZoneIDs;
@end

