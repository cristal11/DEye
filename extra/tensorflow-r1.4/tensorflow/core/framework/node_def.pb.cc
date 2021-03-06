// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/node_def.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/core/framework/node_def.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {

namespace {

const ::google::protobuf::Descriptor* NodeDef_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  NodeDef_reflection_ = NULL;
const ::google::protobuf::Descriptor* NodeDef_AttrEntry_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto() {
  protobuf_AddDesc_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "tensorflow/core/framework/node_def.proto");
  GOOGLE_CHECK(file != NULL);
  NodeDef_descriptor_ = file->message_type(0);
  static const int NodeDef_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NodeDef, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NodeDef, op_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NodeDef, input_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NodeDef, device_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NodeDef, attr_),
  };
  NodeDef_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      NodeDef_descriptor_,
      NodeDef::internal_default_instance(),
      NodeDef_offsets_,
      -1,
      -1,
      -1,
      sizeof(NodeDef),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NodeDef, _internal_metadata_));
  NodeDef_AttrEntry_descriptor_ = NodeDef_descriptor_->nested_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      NodeDef_descriptor_, NodeDef::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
        NodeDef_AttrEntry_descriptor_,
        ::google::protobuf::internal::MapEntry<
            ::std::string,
            ::tensorflow::AttrValue,
            ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
            ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
            0>::CreateDefaultInstance(
                NodeDef_AttrEntry_descriptor_));
}

}  // namespace

void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto() {
  NodeDef_default_instance_.Shutdown();
  delete NodeDef_reflection_;
}

void protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::tensorflow::protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fattr_5fvalue_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  NodeDef_default_instance_.DefaultConstruct();
  ::google::protobuf::internal::GetEmptyString();
  NodeDef_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto_once_);
void protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto_once_,
                 &protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto_impl);
}
void protobuf_AddDesc_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n(tensorflow/core/framework/node_def.pro"
    "to\022\ntensorflow\032*tensorflow/core/framewor"
    "k/attr_value.proto\"\263\001\n\007NodeDef\022\014\n\004name\030\001"
    " \001(\t\022\n\n\002op\030\002 \001(\t\022\r\n\005input\030\003 \003(\t\022\016\n\006devic"
    "e\030\004 \001(\t\022+\n\004attr\030\005 \003(\0132\035.tensorflow.NodeD"
    "ef.AttrEntry\032B\n\tAttrEntry\022\013\n\003key\030\001 \001(\t\022$"
    "\n\005value\030\002 \001(\0132\025.tensorflow.AttrValue:\0028\001"
    "B*\n\030org.tensorflow.frameworkB\tNodeProtoP"
    "\001\370\001\001b\006proto3", 332);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/framework/node_def.proto", &protobuf_RegisterTypes);
  ::tensorflow::protobuf_AddDesc_tensorflow_2fcore_2fframework_2fattr_5fvalue_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto_once_);
void protobuf_AddDesc_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto_once_,
                 &protobuf_AddDesc_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto {
  StaticDescriptorInitializer_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto() {
    protobuf_AddDesc_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto();
  }
} static_descriptor_initializer_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int NodeDef::kNameFieldNumber;
const int NodeDef::kOpFieldNumber;
const int NodeDef::kInputFieldNumber;
const int NodeDef::kDeviceFieldNumber;
const int NodeDef::kAttrFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

NodeDef::NodeDef()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.NodeDef)
}
NodeDef::NodeDef(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  input_(arena),
  attr_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.NodeDef)
}

void NodeDef::InitAsDefaultInstance() {
}

NodeDef::NodeDef(const NodeDef& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tensorflow.NodeDef)
}

void NodeDef::SharedCtor() {
  attr_.SetAssignDescriptorCallback(
      protobuf_AssignDescriptorsOnce);
  attr_.SetEntryDescriptor(
      &::tensorflow::NodeDef_AttrEntry_descriptor_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  op_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  device_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

NodeDef::~NodeDef() {
  // @@protoc_insertion_point(destructor:tensorflow.NodeDef)
  SharedDtor();
}

void NodeDef::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

  name_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
  op_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
  device_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
}

void NodeDef::ArenaDtor(void* object) {
  NodeDef* _this = reinterpret_cast< NodeDef* >(object);
  (void)_this;
}
void NodeDef::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void NodeDef::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* NodeDef::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return NodeDef_descriptor_;
}

const NodeDef& NodeDef::default_instance() {
  protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fnode_5fdef_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<NodeDef> NodeDef_default_instance_;

NodeDef* NodeDef::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<NodeDef>(arena);
}

void NodeDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.NodeDef)
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  op_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  device_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  input_.Clear();
  attr_.Clear();
}

bool NodeDef::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.NodeDef)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.NodeDef.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_op;
        break;
      }

      // optional string op = 2;
      case 2: {
        if (tag == 18) {
         parse_op:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_op()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->op().data(), this->op().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.NodeDef.op"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_input;
        break;
      }

      // repeated string input = 3;
      case 3: {
        if (tag == 26) {
         parse_input:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_input()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->input(this->input_size() - 1).data(),
            this->input(this->input_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.NodeDef.input"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_input;
        if (input->ExpectTag(34)) goto parse_device;
        break;
      }

      // optional string device = 4;
      case 4: {
        if (tag == 34) {
         parse_device:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_device()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->device().data(), this->device().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.NodeDef.device"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_attr;
        break;
      }

      // map<string, .tensorflow.AttrValue> attr = 5;
      case 5: {
        if (tag == 42) {
         parse_attr:
          DO_(input->IncrementRecursionDepth());
         parse_loop_attr:
          NodeDef_AttrEntry::Parser< ::google::protobuf::internal::MapField<
              ::std::string, ::tensorflow::AttrValue,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
              0 >,
            ::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue > > parser(&attr_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.key().data(), parser.key().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.NodeDef.AttrEntry.key"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_loop_attr;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.NodeDef)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.NodeDef)
  return false;
#undef DO_
}

void NodeDef::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.NodeDef)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.NodeDef.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string op = 2;
  if (this->op().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->op().data(), this->op().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.NodeDef.op");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->op(), output);
  }

  // repeated string input = 3;
  for (int i = 0; i < this->input_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->input(i).data(), this->input(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.NodeDef.input");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->input(i), output);
  }

  // optional string device = 4;
  if (this->device().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device().data(), this->device().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.NodeDef.device");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->device(), output);
  }

  // map<string, .tensorflow.AttrValue> attr = 5;
  if (!this->attr().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), p->first.length(),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "tensorflow.NodeDef.AttrEntry.key");
      }
    };

    if (output->IsSerializationDeterminstic() &&
        this->attr().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->attr().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >::const_iterator
          it = this->attr().begin();
          it != this->attr().end(); ++it, ++n) {
        items[n] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[n], Less());
      ::google::protobuf::scoped_ptr<NodeDef_AttrEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(attr_.NewEntryWrapper(
            items[i]->first, items[i]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            5, *entry, output);
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(items[i]);
      }
    } else {
      ::google::protobuf::scoped_ptr<NodeDef_AttrEntry> entry;
      for (::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >::const_iterator
          it = this->attr().begin();
          it != this->attr().end(); ++it) {
        entry.reset(attr_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            5, *entry, output);
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(&*it);
      }
    }
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.NodeDef)
}

::google::protobuf::uint8* NodeDef::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.NodeDef)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.NodeDef.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional string op = 2;
  if (this->op().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->op().data(), this->op().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.NodeDef.op");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->op(), target);
  }

  // repeated string input = 3;
  for (int i = 0; i < this->input_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->input(i).data(), this->input(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.NodeDef.input");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->input(i), target);
  }

  // optional string device = 4;
  if (this->device().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->device().data(), this->device().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.NodeDef.device");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->device(), target);
  }

  // map<string, .tensorflow.AttrValue> attr = 5;
  if (!this->attr().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), p->first.length(),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "tensorflow.NodeDef.AttrEntry.key");
      }
    };

    if (deterministic &&
        this->attr().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->attr().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >::const_iterator
          it = this->attr().begin();
          it != this->attr().end(); ++it, ++n) {
        items[n] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[n], Less());
      ::google::protobuf::scoped_ptr<NodeDef_AttrEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(attr_.NewEntryWrapper(
            items[i]->first, items[i]->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       5, *entry, deterministic, target);
;
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(items[i]);
      }
    } else {
      ::google::protobuf::scoped_ptr<NodeDef_AttrEntry> entry;
      for (::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >::const_iterator
          it = this->attr().begin();
          it != this->attr().end(); ++it) {
        entry.reset(attr_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       5, *entry, deterministic, target);
;
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(&*it);
      }
    }
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.NodeDef)
  return target;
}

size_t NodeDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.NodeDef)
  size_t total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional string op = 2;
  if (this->op().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->op());
  }

  // optional string device = 4;
  if (this->device().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->device());
  }

  // repeated string input = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->input_size());
  for (int i = 0; i < this->input_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->input(i));
  }

  // map<string, .tensorflow.AttrValue> attr = 5;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->attr_size());
  {
    ::google::protobuf::scoped_ptr<NodeDef_AttrEntry> entry;
    for (::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >::const_iterator
        it = this->attr().begin();
        it != this->attr().end(); ++it) {
      if (entry.get() != NULL && entry->GetArena() != NULL) {
        entry.release();
      }
      entry.reset(attr_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
    if (entry.get() != NULL && entry->GetArena() != NULL) {
      entry.release();
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NodeDef::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.NodeDef)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const NodeDef* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const NodeDef>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.NodeDef)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.NodeDef)
    UnsafeMergeFrom(*source);
  }
}

void NodeDef::MergeFrom(const NodeDef& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.NodeDef)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void NodeDef::UnsafeMergeFrom(const NodeDef& from) {
  GOOGLE_DCHECK(&from != this);
  input_.UnsafeMergeFrom(from.input_);
  attr_.MergeFrom(from.attr_);
  if (from.name().size() > 0) {
    set_name(from.name());
  }
  if (from.op().size() > 0) {
    set_op(from.op());
  }
  if (from.device().size() > 0) {
    set_device(from.device());
  }
}

void NodeDef::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.NodeDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NodeDef::CopyFrom(const NodeDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.NodeDef)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool NodeDef::IsInitialized() const {

  return true;
}

void NodeDef::Swap(NodeDef* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    NodeDef temp;
    temp.UnsafeMergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void NodeDef::UnsafeArenaSwap(NodeDef* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void NodeDef::InternalSwap(NodeDef* other) {
  name_.Swap(&other->name_);
  op_.Swap(&other->op_);
  input_.UnsafeArenaSwap(&other->input_);
  device_.Swap(&other->device_);
  attr_.Swap(&other->attr_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata NodeDef::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = NodeDef_descriptor_;
  metadata.reflection = NodeDef_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// NodeDef

// optional string name = 1;
void NodeDef::clear_name() {
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& NodeDef::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.NodeDef.name)
  return name_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void NodeDef::set_name(const ::std::string& value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.NodeDef.name)
}
void NodeDef::set_name(const char* value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.NodeDef.name)
}
void NodeDef::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.NodeDef.name)
}
::std::string* NodeDef::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.NodeDef.name)
  return name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* NodeDef::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.NodeDef.name)
  
  return name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* NodeDef::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.NodeDef.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void NodeDef::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.NodeDef.name)
}
void NodeDef::unsafe_arena_set_allocated_name(
    ::std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (name != NULL) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.NodeDef.name)
}

// optional string op = 2;
void NodeDef::clear_op() {
  op_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& NodeDef::op() const {
  // @@protoc_insertion_point(field_get:tensorflow.NodeDef.op)
  return op_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void NodeDef::set_op(const ::std::string& value) {
  
  op_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.NodeDef.op)
}
void NodeDef::set_op(const char* value) {
  
  op_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.NodeDef.op)
}
void NodeDef::set_op(const char* value,
    size_t size) {
  
  op_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.NodeDef.op)
}
::std::string* NodeDef::mutable_op() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.NodeDef.op)
  return op_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* NodeDef::release_op() {
  // @@protoc_insertion_point(field_release:tensorflow.NodeDef.op)
  
  return op_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* NodeDef::unsafe_arena_release_op() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.NodeDef.op)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return op_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void NodeDef::set_allocated_op(::std::string* op) {
  if (op != NULL) {
    
  } else {
    
  }
  op_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), op,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.NodeDef.op)
}
void NodeDef::unsafe_arena_set_allocated_op(
    ::std::string* op) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (op != NULL) {
    
  } else {
    
  }
  op_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      op, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.NodeDef.op)
}

// repeated string input = 3;
int NodeDef::input_size() const {
  return input_.size();
}
void NodeDef::clear_input() {
  input_.Clear();
}
const ::std::string& NodeDef::input(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.NodeDef.input)
  return input_.Get(index);
}
::std::string* NodeDef::mutable_input(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.NodeDef.input)
  return input_.Mutable(index);
}
void NodeDef::set_input(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.NodeDef.input)
  input_.Mutable(index)->assign(value);
}
void NodeDef::set_input(int index, const char* value) {
  input_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.NodeDef.input)
}
void NodeDef::set_input(int index, const char* value, size_t size) {
  input_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.NodeDef.input)
}
::std::string* NodeDef::add_input() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.NodeDef.input)
  return input_.Add();
}
void NodeDef::add_input(const ::std::string& value) {
  input_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.NodeDef.input)
}
void NodeDef::add_input(const char* value) {
  input_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.NodeDef.input)
}
void NodeDef::add_input(const char* value, size_t size) {
  input_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.NodeDef.input)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
NodeDef::input() const {
  // @@protoc_insertion_point(field_list:tensorflow.NodeDef.input)
  return input_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
NodeDef::mutable_input() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.NodeDef.input)
  return &input_;
}

// optional string device = 4;
void NodeDef::clear_device() {
  device_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& NodeDef::device() const {
  // @@protoc_insertion_point(field_get:tensorflow.NodeDef.device)
  return device_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void NodeDef::set_device(const ::std::string& value) {
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.NodeDef.device)
}
void NodeDef::set_device(const char* value) {
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.NodeDef.device)
}
void NodeDef::set_device(const char* value,
    size_t size) {
  
  device_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.NodeDef.device)
}
::std::string* NodeDef::mutable_device() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.NodeDef.device)
  return device_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* NodeDef::release_device() {
  // @@protoc_insertion_point(field_release:tensorflow.NodeDef.device)
  
  return device_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* NodeDef::unsafe_arena_release_device() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.NodeDef.device)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return device_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void NodeDef::set_allocated_device(::std::string* device) {
  if (device != NULL) {
    
  } else {
    
  }
  device_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.NodeDef.device)
}
void NodeDef::unsafe_arena_set_allocated_device(
    ::std::string* device) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (device != NULL) {
    
  } else {
    
  }
  device_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      device, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.NodeDef.device)
}

// map<string, .tensorflow.AttrValue> attr = 5;
int NodeDef::attr_size() const {
  return attr_.size();
}
void NodeDef::clear_attr() {
  attr_.Clear();
}
 const ::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >&
NodeDef::attr() const {
  // @@protoc_insertion_point(field_map:tensorflow.NodeDef.attr)
  return attr_.GetMap();
}
 ::google::protobuf::Map< ::std::string, ::tensorflow::AttrValue >*
NodeDef::mutable_attr() {
  // @@protoc_insertion_point(field_mutable_map:tensorflow.NodeDef.attr)
  return attr_.MutableMap();
}

inline const NodeDef* NodeDef::internal_default_instance() {
  return &NodeDef_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
