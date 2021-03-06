/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/HID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HID/HID-Structs.h>
@interface HIDTransaction : NSObject {

	IOHIDTransactionRef _transaction;

}

@property (assign) long long direction; 
-(id)description;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(BOOL)commitElements:(id)arg1 error:(out id*)arg2 ;
@end

