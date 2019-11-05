/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAVCSVendResultsToSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * shelves; 
@property (nonatomic,copy) NSString * title; 
+(id)vendResultsToSearch;
+(id)vendResultsToSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)shelves;
-(void)setShelves:(NSArray *)arg1 ;
@end

