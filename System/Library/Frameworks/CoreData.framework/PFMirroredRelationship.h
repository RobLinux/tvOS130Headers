/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFMirroredRelationship : NSObject
+(BOOL)isValidMirroredRelationshipRecord:(id)arg1 values:(id)arg2 ;
+(id)mirroredRelationshipWithManyToManyRecord:(id)arg1 values:(id)arg2 andManagedObjectModel:(id)arg3 ;
+(id)mirroredRelationshipWithDeletedRecordType:(id)arg1 recordID:(id)arg2 andManagedObjectModel:(id)arg3 ;
+(id)mirroredRelationshipWithManagedObject:(id)arg1 withRecordID:(id)arg2 relatedToObjectWithRecordID:(id)arg3 byRelationship:(id)arg4 ;
-(BOOL)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3 ;
@end
