/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@interface AXEventData : NSObject {

	AXEventDataStorage _storage;

}

@property (nonatomic,readonly) long long eventSenderIdentifier; 
@property (nonatomic,readonly) BOOL wasPostedByAccessibility; 
@property (nonatomic,readonly) char* dataBytes; 
@property (nonatomic,readonly) long long dataLength; 
+(id)dataWithBytes:(char*)arg1 length:(long long)arg2 ;
+(id)dataWithSender:(long long)arg1 ;
-(id)description;
-(id)init;
-(long long)dataLength;
-(char*)dataBytes;
-(long long)eventSenderIdentifier;
-(BOOL)wasPostedByAccessibility;
@end

