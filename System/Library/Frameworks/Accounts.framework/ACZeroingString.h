/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <Foundation/NSString.h>

@interface ACZeroingString : NSString {

	unsigned short* _characters;
	unsigned long long _length;

}

@property (readonly) unsigned short* characters;              //@synthesize characters=_characters - In the implementation block
@property (readonly) unsigned long long length; 
+(BOOL)supportsSecureCoding;
+(Class)classForKeyedUnarchiver;
+(id)_emptyString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
-(id)initWithUTF8String:(const char*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(Class)classForCoder;
-(id)initWithString:(id)arg1 ;
-(id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(unsigned short*)characters;
-(id)replacementObjectForCoder:(id)arg1 ;
-(Class)classForKeyedArchiver;
-(BOOL)_allowsDirectEncoding;
-(id)_compatibleCopy;
@end

