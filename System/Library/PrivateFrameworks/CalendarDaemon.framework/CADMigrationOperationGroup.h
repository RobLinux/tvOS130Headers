/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <CalendarDaemon/CADMigrationInterface.h>

@interface CADMigrationOperationGroup : CADOperationGroup <CADMigrationInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(void)CADMigrateDatabaseIfNeeded:(/*^block*/id)arg1 ;
@end

