/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface MobileCalDAVDeletedItemContext : NSObject {

	int _entityType;
	NSNumber* _rowid;

}

@property (nonatomic,retain) NSNumber * rowid;              //@synthesize rowid=_rowid - In the implementation block
@property (assign,nonatomic) int entityType;                //@synthesize entityType=_entityType - In the implementation block
-(int)entityType;
-(void)setEntityType:(int)arg1 ;
-(void)setRowid:(NSNumber *)arg1 ;
-(NSNumber *)rowid;
@end

