/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABVCardDateScanner : NSObject {

	NSString* _string;
	unsigned long long _position;

}

@property (readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
+(id)scannerWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(BOOL)isAtEnd;
-(unsigned long long)position;
-(unsigned short)nextCharacter;
-(unsigned long long)lengthOfCalendarUnit:(unsigned long long)arg1 ;
-(long long)scanComponentValueOfLength:(unsigned long long)arg1 ;
-(long long)scanCalendarUnit:(unsigned long long)arg1 ;
-(BOOL)scanLeapMarker;
@end

