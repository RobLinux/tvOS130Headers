/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/UpdateMigratorOperation.h>

@class NSArray, NSDictionary;

@interface UpdateMigratorPromotionOperation : UpdateMigratorOperation {

	NSArray* _bundleIDs;
	NSDictionary* _options;

}
-(id)initWithConfiguration:(id)arg1 ;
-(void)performMigration;
-(id)migratorType;
-(id)copyConfiguration;
-(id)initWithBundleIdentifiers:(id)arg1 options:(id)arg2 ;
@end

