/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SACFPEXItem.h>

@class SAPerson;

@interface SACFPEXContactNameItem : SACFPEXItem

@property (nonatomic,retain) SAPerson * person; 
+(id)contactNameItem;
+(id)contactNameItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAPerson *)person;
-(void)setPerson:(SAPerson *)arg1 ;
-(id)encodedClassName;
@end

