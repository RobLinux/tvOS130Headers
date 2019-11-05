/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SAUIAppPunchOut, NSArray;

@interface SAStockSnippet : SAUISnippet

@property (nonatomic,retain) SAUIAppPunchOut * appPunchOut; 
@property (nonatomic,copy) NSArray * stocks; 
+(id)snippet;
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)stocks;
-(void)setStocks:(NSArray *)arg1 ;
-(SAUIAppPunchOut *)appPunchOut;
-(void)setAppPunchOut:(SAUIAppPunchOut *)arg1 ;
@end

