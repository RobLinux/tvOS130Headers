/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:28:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libnetwork.dylib/OS_nw_framer.h>

@protocol OS_nw_protocol_definition, OS_nw_endpoint, OS_nw_parameters, OS_nw_context, OS_nw_protocol_metadata, OS_dispatch_data;
@class NSObject, NSString;

@interface NWConcrete_nw_framer : NSObject <OS_nw_framer> {

	NSObject*<OS_nw_protocol_definition> parent_definition;
	nw_protocol_callbacks* callbacks;
	nw_protocol* protocol;
	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_parameters> parameters;
	NSObject*<OS_nw_context> context;
	NSObject*<OS_nw_protocol_metadata> pending_inbound_message;
	/*^block*/id start;
	/*^block*/id parse_input;
	/*^block*/id write_output;
	/*^block*/id wakeup;
	/*^block*/id stop;
	/*^block*/id cleanup;
	/*^block*/id copy_metadata;
	nw_frame_array_s* inbound_frames;
	nw_frame_array_s* outbound_frames;
	unsigned long long input_needed;
	unsigned long long input_body_remaining;
	nw_frame_array_s* received_input_frames;
	nw_frame_array_s* pending_input_frames;
	unsigned pending_input_frame_count;
	NSObject*<OS_dispatch_data> output_data;
	nw_frame_array_s* received_output_frames;
	NSObject*<OS_nw_protocol_metadata> pending_output_message;
	BOOL pending_output_message_complete;
	unsigned pending_output_message_length;
	unsigned pending_output_frames;
	unsigned pending_output_cursor;
	unsigned short prepended_log_id_num;
	unsigned supports_external_data : 1;
	unsigned output_frame_as_message : 1;
	unsigned in_start : 1;
	unsigned called_start : 1;
	unsigned ready : 1;
	unsigned flow_controlled : 1;
	unsigned waiting_for_flow_control : 1;
	unsigned in_input_callout : 1;
	unsigned in_input_available : 1;
	unsigned new_input_available : 1;
	unsigned in_output_callout : 1;
	unsigned pending_input_should_mark_complete : 1;
	unsigned failed : 1;
	unsigned pass_through_input : 1;
	unsigned pass_through_output : 1;
	unsigned __pad_bits : 2;
	char log_str[84];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
@end

