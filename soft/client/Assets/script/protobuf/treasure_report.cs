//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: treasure_report.eproto
namespace dhc
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"treasure_report_t")]
  public partial class treasure_report_t : global::ProtoBuf.IExtensible
  {
    public treasure_report_t() {}
    
    private ulong _guid = default(ulong);
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(ulong))]
    public ulong guid
    {
      get { return _guid; }
      set { _guid = value; }
    }
    private ulong _player_guid = default(ulong);
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"player_guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(ulong))]
    public ulong player_guid
    {
      get { return _player_guid; }
      set { _player_guid = value; }
    }
    private ulong _other_guid = default(ulong);
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"other_guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(ulong))]
    public ulong other_guid
    {
      get { return _other_guid; }
      set { _other_guid = value; }
    }
    private byte[] _other_name = null;
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"other_name", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public byte[] other_name
    {
      get { return _other_name; }
      set { _other_name = value; }
    }
    private int _other_template = default(int);
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"other_template", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int other_template
    {
      get { return _other_template; }
      set { _other_template = value; }
    }
    private int _other_level = default(int);
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"other_level", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int other_level
    {
      get { return _other_level; }
      set { _other_level = value; }
    }
    private int _other_bf = default(int);
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"other_bf", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int other_bf
    {
      get { return _other_bf; }
      set { _other_bf = value; }
    }
    private int _win = default(int);
    [global::ProtoBuf.ProtoMember(8, IsRequired = false, Name=@"win", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int win
    {
      get { return _win; }
      set { _win = value; }
    }
    private ulong _time = default(ulong);
    [global::ProtoBuf.ProtoMember(9, IsRequired = false, Name=@"time", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(ulong))]
    public ulong time
    {
      get { return _time; }
      set { _time = value; }
    }
    private int _suipian_id = default(int);
    [global::ProtoBuf.ProtoMember(10, IsRequired = false, Name=@"suipian_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int suipian_id
    {
      get { return _suipian_id; }
      set { _suipian_id = value; }
    }
    private int _new_report = default(int);
    [global::ProtoBuf.ProtoMember(11, IsRequired = false, Name=@"new_report", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int new_report
    {
      get { return _new_report; }
      set { _new_report = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}