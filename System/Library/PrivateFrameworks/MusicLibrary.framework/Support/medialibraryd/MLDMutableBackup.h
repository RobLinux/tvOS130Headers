/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:46:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/MLDBackup.h>

@class NSString, NSDate, NSArray;

@interface MLDMutableBackup : MLDBackup

@property (nonatomic,copy) NSString * originalDatabasePath; 
@property (nonatomic,copy) NSDate * dateCreated; 
@property (nonatomic,copy) NSArray * databaseFiles; 
-(void)setDateCreated:(NSDate *)arg1 ;
-(void)setOriginalDatabasePath:(NSString *)arg1 ;
-(void)setDatabaseFiles:(NSArray *)arg1 ;
@end
