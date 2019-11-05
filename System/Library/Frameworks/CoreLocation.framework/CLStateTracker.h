/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@interface CLStateTracker : NSObject {

	unsigned long long _handle;

}

@property (nonatomic,readonly) void* identifier; 
+(unsigned long long)trackerStateSize;
+(const char*)trackerStateTypeName;
-(void)dealloc;
-(void*)identifier;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)dumpState:(void*)arg1 withSize:(unsigned long long)arg2 hints:(os_state_hints_s*)arg3 ;
@end
