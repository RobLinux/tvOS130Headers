/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKEncryptedData.h>
#import <CloudKit/CKRecordValue.h>
#import <CloudKit/NSCopying.h>
#import <CloudKit/NSSecureCoding.h>

@class NSDate, NSString;

@interface CKEncryptedDate : CKEncryptedData <CKRecordValue, NSCopying, NSSecureCoding>

@property (nonatomic,readonly) NSDate * date; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)date;
-(id)initWithDate:(id)arg1 ;
-(id)value;
@end

