/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/NSSecureCoding.h>
#import <IDSFoundation/NSCopying.h>

@class IDSCKRecordZoneID;

@interface IDSCKRecordZone : NSObject <NSSecureCoding, NSCopying> {

	IDSCKRecordZoneID* _zoneID;

}

@property (nonatomic,readonly) IDSCKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
+(id)alloc;
+(Class)__class;
-(IDSCKRecordZoneID *)zoneID;
@end

